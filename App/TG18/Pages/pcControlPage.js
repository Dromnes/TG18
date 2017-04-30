var colorPalette = require("../Assets/colorPalette");
colorPalette = colorPalette.colors;

var pcControlButtons = [];

function createButtons(name, text, textColor, color, signal) {
	pcControlButtons.push({
		id: pcControlButtons.length,
		name: name,
		text: text,
		textColor: textColor,
		color: color,
		signal: signal
	});
}

createButtons("restart", "Restart", colorPalette.black.code, colorPalette.grey.code, "");
createButtons("on/off", "ON/OFF", colorPalette.black.code, colorPalette.grey.code, "");

module.exports = {
	pcControlButtons: pcControlButtons
}