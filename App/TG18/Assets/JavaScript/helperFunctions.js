function changeActivePage(replaceWith) {
	var activePage = require("../JavaScript/activePage");
	var pagesFile = require("Pages/pages");

	activePage.replaceAt(0, pagesFile.pages[replaceWith]);
	return true;
}

function gotoHomePage() {
	changeActivePage("homePage");
	return true;
}

module.exports = {
	gotoHomePage: gotoHomePage,
	changeActivePage: changeActivePage
}