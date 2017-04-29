var colors = [
	{
		id: "0",
		name: "red",
		code: "#FF0000"
	},
	{
		id: "1",
		name: "green",
		code: "#00FF00"
	},
	{
		id: "2",
		name: "blue",
		code: "#0000FF"
	},
	{
		id: "3",
		name: "lightRed",
		code: "#DC5050"
	},
	{
		id: "4",
		name: "lightGreen",
		code: "#A0FFA0"
	},
	{
		id: "5",
		name: "lightBlue",
		code: "#3C3CFF"
	},
	{
		id: "6",
		name: "orange",
		code: "#FF9696"
	},
	{
		id: "7",
		name: "cyan",
		code: "#78FFFF"
	},
	{
		id: "8",
		name: "violet",
		code: "#3C003C"
	},
	{
		id: "9",
		name: "lightOrange",
		code: "#FFBE78"
	},
	{
		id: "10",
		name: "lightTurquoise",
		code: "#00AFAF"
	},
	{
		id: "11",
		name: "purple",
		code: "#640064"
	},
	{
		id: "12",
		name: "yellow",
		code: "#FFFF78"
	},
	{
		id: "13",
		name: "turquoise",
		code: "#006464"
	},
	{
		id: "14",
		name: "pink",
		code: "#BE50BE"
	},
	{
		id: "15",
		name: "white",
		code: "#FFFFFF"
	},
	{
		id: "16",
		name: "black",
		code: "#000000"
	},
	{
		id: "17",
		name: "grey",
		code: "#999999"
	}
];

function getColor(name) {
	for(var i=0;i<colors.length;i++) {
		if(colors[i].name == name) {
			return colors[i].code;
		}
	}
}


module.exports = {
	colors: colors,

	name: colors.name,
	code: colors.code,
	getColor: getColor
}