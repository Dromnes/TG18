var pages = require("Pages/pages");
pages = pages.pages;
var pagesArray = [];

for(var key in pages) {
	pagesArray.push(pages[key]);
}

module.exports = {
	pagesArray: pagesArray,
	navReference: pagesArray.navReference
}