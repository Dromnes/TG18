var colorPalette = require("../Assets/colorPalette");

var lightControlButtons = [];

function createButton(name, text, textColor, color, signal) {
	lightControlButtons.push({
		id: lightControlButtons.length,
		name: name,
		text: text,
		textColor: textColor,
		color: color,
		signal: signal
	});
}

createButton("dimUp", -1, -1, colorPalette.getColor("white"), "");
createButton("dimDown", -1, -1, colorPalette.getColor("white"), "");
createButton("off", "OFF", colorPalette.getColor("white"), colorPalette.getColor("black"), "");
createButton("on", "ON", colorPalette.getColor("white"), colorPalette.getColor("red"), "");

createButton("red", "R", colorPalette.getColor("black"), colorPalette.getColor("red"), "");
createButton("green", "G", colorPalette.getColor("black"), colorPalette.getColor("green"), "");
createButton("blue", "B", colorPalette.getColor("white"), colorPalette.getColor("blue"), "");
createButton("white", "W", colorPalette.getColor("black"), colorPalette.getColor("white"), "");

createButton("lightRed", -1, -1, colorPalette.getColor("lightRed"), "");
createButton("lightGreen", -1, -1, colorPalette.getColor("lightGreen"), "");
createButton("lightBlue", -1, -1, colorPalette.getColor("lightBlue"), "");
createButton("flash", "FLASH", colorPalette.getColor("black"), colorPalette.getColor("grey"), "");

createButton("orange", -1, -1, colorPalette.getColor("orange"), "");
createButton("cyan", -1, -1, colorPalette.getColor("cyan"), "");
createButton("violet", -1, -1, colorPalette.getColor("violet"), "");
createButton("strobe", "STROBE", colorPalette.getColor("black"), colorPalette.getColor("grey"), "");

createButton("lightOrange", -1, -1, colorPalette.getColor("lightOrange"), "");
createButton("lightTurquoise", -1, -1, colorPalette.getColor("lightTurquoise"), "");
createButton("purple", -1, -1, colorPalette.getColor("purple"), "");
createButton("fade", "FADE", colorPalette.getColor("black"), colorPalette.getColor("grey"), "");

createButton("yellow", -1, -1, colorPalette.getColor("yellow"), "");
createButton("turquoise", -1, -1, colorPalette.getColor("turquoise"), "");
createButton("pink", -1, -1, colorPalette.getColor("pink"), "");
createButton("smooth", "SMOOTH", colorPalette.getColor("black"), colorPalette.getColor("grey"), "");

module.exports = {
	colorPalette: colorPalette,

	lightControlButtons: lightControlButtons,
};