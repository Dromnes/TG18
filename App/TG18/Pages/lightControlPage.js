var colorPalette = require("../Assets/colorPalette");

var buttons = [];
var name = "";
var text = "";
var textColor = "";
var color = "";
var signal = "";

function createButton(name, text, textColor, color, signal) {
	buttons.push({
		id: buttons.length,
		name: name,
		text: text,
		textColor: textColor,
		color: color,
		signal: signal
	});
}

for(var i=0;i<24;i++) {
	switch(i) {
	case 0:
		name = "dimUp";
		text = "";
		textColor = "";
		color = colorPalette.getColor("white");
		signal = "";
		break;

	case 1:
		name = "dimDown";
		text = "";
		textColor = "";
		color = colorPalette.getColor("white");
		signal = "";
		break;

	case 2:
		name = "off";
		text = "OFF";
		textColor = colorPalette.getColor("white");
		color = colorPalette.getColor("black");
		signal = "";
		break;

	case 3:
		name = "on";
		text = "ON";
		textColor = colorPalette.getColor("white");
		color = colorPalette.getColor("red");
		signal = "";
		break;

	case 4:
		name = "red";
		text = "R";
		textColor = colorPalette.getColor("black");
		color = colorPalette.getColor("red");
		signal = "";
		break;

	case 5:
		name = "green";
		text = "G";
		textColor = colorPalette.getColor("black");
		color = colorPalette.getColor("green");
		signal = "";
		break;

	case 6:
		name = "blue";
		text = "B";
		textColor = colorPalette.getColor("black");
		color = colorPalette.getColor("blue");
		signal = "";
		break;

	case 7:
		name = "white";
		text = "W";
		textColor = colorPalette.getColor("black");
		color = colorPalette.getColor("white");
		signal = "";
		break;

	case 8:
		name = "lightRed";
		text = "";
		textColor = "";
		color = colorPalette.getColor("lightRed");
		signal = "";
		break;

	case 9:
		name = "lightGreen";
		text = "";
		textColor = "";
		color = colorPalette.getColor("lightGreen");
	 	signal = "";
		break;

	case 10:
		name = "lightBlue";
		text = "";
		textColor = "";
		color = colorPalette.getColor("lightBlue");
		signal = "";
		break;

	case 11:
		name = "flash";
		text = "FLASH";
		textColor = colorPalette.getColor("black");
		color = colorPalette.getColor("grey");
		signal = "";
		break;

	case 12:
		name = "orange";
		text = "";
		textColor = "";
		color = colorPalette.getColor("orange");
		signal = "";
		break;

	case 13:
		name = "cyan";
		text = "";
		textColor = "";
		color = colorPalette.getColor("cyan");
		signal = "";
		break;

	case 14:
		name = "violet";
		text = "";
		textColor = "";
		color = colorPalette.getColor("violet");
		signal = "";
		break;

	case 15:
		name = "strobe";
		text = "STROBE";
		textColor = colorPalette.getColor("black");
		color = colorPalette.getColor("grey");
		signal = "";
		break;

	case 16:
		name = "lightOrange";
		text = "";
		textColor = "";
		color = colorPalette.getColor("lightOrange");
		signal = "";
		break;

	case 17:
		name = "lightTurquoise";
		text = "";
		textColor = "";
		color = colorPalette.getColor("lightTurquoise");
		signal = "";
		break;

	case 18:
		name = "purple";
		text = "";
		textColor = "";
		color = colorPalette.getColor("purple");
		signal = "";
		break;

	case 19:
		name = "fade";
		text = "FADE";
		textColor = colorPalette.getColor("black");
		color = colorPalette.getColor("grey");
		signal = "";
		break;

	case 20:
		name = "yellow";
		text = "";
		textColor = "";
		color = colorPalette.getColor("yellow");
		signal = "";
		break;

	case 21:
		name = "turquoise";
		text = "";
		textColor = "";
		color = colorPalette.getColor("turquoise");
		signal = "";
		break;

	case 22:
		name = "pink";
		text = "";
		textColor = "";
		color = colorPalette.getColor("pink");
		signal = "";
		break;

	case 23:
		name = "smooth";
		text = "SMOOTH";
		textColor = colorPalette.getColor("black");
		color = colorPalette.getColor("grey");
		signal = "";
		break;

	default:
		name = "?";
		text = "?";
		textColor = "";
		color = colorPalette.getColor("grey");
		signal = "";
		break;
	
	}
	if(textColor == "") {
		textColor = colorPalette.getColor("white");
	}
	createButton(name, text, textColor, color, signal);
}

module.exports = {
	buttons: buttons,

	name: name,
	text: text,
	textColor: textColor,
	color: color,
	signal: signal
};