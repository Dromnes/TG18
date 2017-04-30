var pages = require("Pages/pages");
var pagesArray = [];

for(var key in pages) {
	pagesArray.push(pages[key]);
}

module.exports = {
	pagesArray: pagesArray,

	name: pagesArray.name,
	navReference: pagesArray.navReference
}