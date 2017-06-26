var colorPalette = require("../JavaScript/colorPalette");
colorPalette = colorPalette.colors;

var lightButtons = Array(
	{name: "dimUp", color: colorPalette.white.code, text: "", textColor: colorPalette.white.code, fontSize: "0"},
	{name: "dimDown", color: colorPalette.white.code, text: "", textColor: colorPalette.white.code, fontSize: "0"},
	{name: "off", color: colorPalette.black.code, text: "OFF", textColor: colorPalette.white.code, fontSize: "28"},
	{name: "on", color: colorPalette.red.code, text: "ON", textColor: colorPalette.white.code, fontSize: "28"},

	{name: "red", color: colorPalette.red.code, text: "R", textColor: colorPalette.white.code, fontSize: "28"},
	{name: "green", color: colorPalette.green.code, text: "G", textColor: colorPalette.white.code, fontSize: "28"},
	{name: "blue", color: colorPalette.blue.code, text: "B", textColor: colorPalette.white.code, fontSize: "28"},
	{name: "white", color: colorPalette.white.code, text: "W", textColor: colorPalette.mdBlack.code, fontSize: "26"},

	{name: "lightRed", color: colorPalette.lightRed.code, text: "", textColor: colorPalette.white.code, fontSize: "0"},
	{name: "lightGreen", color: colorPalette.lightGreen.code, text: "", textColor: colorPalette.white.code, fontSize: "0"},
	{name: "lightBlue", color: colorPalette.lightBlue.code, text: "", textColor: colorPalette.white.code, fontSize: "0"},
	{name: "flash", color: colorPalette.grey.code, text: "FLASH", textColor: colorPalette.mdBlack.code, fontSize: "18"},

	{name: "orange", color: colorPalette.orange.code, text: "", textColor: colorPalette.white.code, fontSize: "0"},
	{name: "cyan", color: colorPalette.cyan.code, text: "", textColor: colorPalette.white.code, fontSize: "0"},
	{name: "violet", color: colorPalette.violet.code, text: "", textColor: colorPalette.white.code, fontSize: "0"},
	{name: "strobe", color: colorPalette.grey.code, text: "STROBE", textColor: colorPalette.mdBlack.code, fontSize: "18"},

	{name: "lightOrange", color: colorPalette.lightOrange.code, text: "", textColor: colorPalette.white.code, fontSize: "0"},
	{name: "lightTurquoise", color: colorPalette.lightTurquoise.code, text: "", textColor: colorPalette.white.code, fontSize: "0"},
	{name: "purple", color: colorPalette.purple.code, text: "", textColor: colorPalette.white.code, fontSize: "0"},
	{name: "fade", color: colorPalette.grey.code, text: "FADE", textColor: colorPalette.mdBlack.code, fontSize: "18"},

	{name: "yellow", color: colorPalette.yellow.code, text: "", textColor: colorPalette.white.code, fontSize: "0"},
	{name: "turquoise", color: colorPalette.turquoise.code, text: "", textColor: colorPalette.white.code, fontSize: "0"},
	{name: "pink", color: colorPalette.pink.code, text: "", textColor: colorPalette.white.code, fontSize: "0"},
	{name: "smooth", color: colorPalette.grey.code, text: "SMOOTH", textColor: colorPalette.mdBlack.code, fontSize: "18"}
)

module.exports = lightButtons;