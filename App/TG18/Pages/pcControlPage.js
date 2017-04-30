var colorPalette = require("../Assets/colorPalette");

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

createButtons("restart", "Restart", colorPalette.getColor("black"), colorPalette.getColor("grey"), "");
createButtons("on/off", "ON/OFF", colorPalette.getColor("black"), colorPalette.getColor("grey"), "");

module.exports = {
	colorPalette: colorPalette,

	pcControlButtons: pcControlButtons
}