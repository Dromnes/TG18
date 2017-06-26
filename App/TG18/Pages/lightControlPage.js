var colorPalette = require("../Assets/colorPalette");
colorPalette = colorPalette.colors;

function createButton(name, text, textColor, color, font, signal) {
	lightControlButtons.push({
		id: lightControlButtons.length,
		name: name,
		text: text,
		textColor: textColor,
		color: color,
		font: font,
		signal: signal
	});
}

var lightControlButtons = [];

createButton("dimUp", -1, -1, colorPalette.white.code, "fa", "");
createButton("dimDown", -1, -1, colorPalette.white.code, "fa", "");
createButton("off", "OFF", colorPalette.white.code, colorPalette.black.code, "built", "");
createButton("on", "ON", colorPalette.white.code, colorPalette.red.code, "built", "");

createButton("red", "R", colorPalette.black.code, colorPalette.red.code, "built", "");
createButton("green", "G", colorPalette.black.code, colorPalette.green.code, "built", "");
createButton("blue", "B", colorPalette.white.code, colorPalette.blue.code, "built", "");
createButton("white", "W", colorPalette.black.code, colorPalette.white.code, "built", "");

createButton("lightRed", -1, -1, colorPalette.lightRed.code, "built", "");
createButton("lightGreen", -1, -1, colorPalette.lightGreen.code, "built", "");
createButton("lightBlue", -1, -1, colorPalette.lightBlue.code, "built", "");
createButton("flash", "FLASH", colorPalette.black.code, colorPalette.grey.code, "built", "");

createButton("orange", -1, -1, colorPalette.orange.code, "built", "");
createButton("cyan", -1, -1, colorPalette.cyan.code, "built", "");
createButton("violet", -1, -1, colorPalette.violet.code, "built", "");
createButton("strobe", "STROBE", colorPalette.black.code, colorPalette.grey.code, "built", "");

createButton("lightOrange", -1, -1, colorPalette.lightOrange.code, "built", "");
createButton("lightTurquoise", -1, -1, colorPalette.lightTurquoise.code, "built", "");
createButton("purple", -1, -1, colorPalette.purple.code, "built", "");
createButton("fade", "FADE", colorPalette.black.code, colorPalette.grey.code, "built", "");

createButton("yellow", -1, -1, colorPalette.yellow.code, "built", "");
createButton("turquoise", -1, -1, colorPalette.turquoise.code, "built", "");
createButton("pink", -1, -1, colorPalette.pink.code, "built", "");
createButton("smooth", "SMOOTH", colorPalette.black.code, colorPalette.grey.code, "built", "");

module.exports = {
	lightControlButtons: lightControlButtons
};