var colorPalette = require("../Assets/colorPalette");
colorPalette = colorPalette.colors;

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

var lightControlButtons = [];

createButton("dimUp", -1, -1, colorPalette.white.code, "");
createButton("dimDown", -1, -1, colorPalette.white.code, "");
createButton("off", "OFF", colorPalette.white.code, colorPalette.black.code, "");
createButton("on", "ON", colorPalette.white.code, colorPalette.red.code, "");

createButton("red", "R", colorPalette.black.code, colorPalette.red.code, "");
createButton("green", "G", colorPalette.black.code, colorPalette.green.code, "");
createButton("blue", "B", colorPalette.white.code, colorPalette.blue.code, "");
createButton("white", "W", colorPalette.black.code, colorPalette.white.code, "");

createButton("lightRed", -1, -1, colorPalette.lightRed.code, "");
createButton("lightGreen", -1, -1, colorPalette.lightGreen.code, "");
createButton("lightBlue", -1, -1, colorPalette.lightBlue.code, "");
createButton("flash", "FLASH", colorPalette.black.code, colorPalette.grey.code, "");

createButton("orange", -1, -1, colorPalette.orange.code, "");
createButton("cyan", -1, -1, colorPalette.cyan.code, "");
createButton("violet", -1, -1, colorPalette.violet.code, "");
createButton("strobe", "STROBE", colorPalette.black.code, colorPalette.grey.code, "");

createButton("lightOrange", -1, -1, colorPalette.lightOrange.code, "");
createButton("lightTurquoise", -1, -1, colorPalette.lightTurquoise.code, "");
createButton("purple", -1, -1, colorPalette.purple.code, "");
createButton("fade", "FADE", colorPalette.black.code, colorPalette.grey.code, "");

createButton("yellow", -1, -1, colorPalette.yellow.code, "");
createButton("turquoise", -1, -1, colorPalette.turquoise.code, "");
createButton("pink", -1, -1, colorPalette.pink.code, "");
createButton("smooth", "SMOOTH", colorPalette.black.code, colorPalette.grey.code, "");

module.exports = {
	lightControlButtons: lightControlButtons
};