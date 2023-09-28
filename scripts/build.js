import { readdir } from "node:fs/promises";
import { join } from "node:path";
import * as cheerio from "cheerio";

const extention_map = {
  js: "Javascript",
  py: "Python",
  ts: "Typescript",
  c: "C",
  java: "Java",
};

const template = await Bun.file("templates/index.html").text();
const $ = cheerio.load(template);

// Traverse through the problems folder and add each problem to the index page

$("#content").text("Hello World");

const days = await readdir("problems");

for (const day of days) {
  console.log("Building day", day);
  const fileNames = await readdir(`problems/${day}`);
  const solutionFile = fileNames.find((file) => file.includes("solution"));
  const extention = solutionFile.split(".")[1];

  const problemText = await Bun.file(`problems/${day}/problem.md`).text();
  const solutionText = await Bun.file(
    `problems/${day}/solution.${extention}`
  ).text();
  //   const info = await Bun.file(`problems/${day}/.info`)
  // Append problem to index page
  $("#content").append(`<h2>${day} - Easy</h2>`);
  $("#content").append(`<md-block>${problemText}</md-block>`);
  $("#content").append(
    "<md-block>```" +
      `${extention_map[extention]}\n${solutionText}` +
      "\n```</md-block>"
  );
}

Bun.write("dist/index.html", $.html());
