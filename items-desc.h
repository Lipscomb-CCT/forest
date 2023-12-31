struct item {
	const int item_id;
	const char *item_name;
	const char *item_adj;
	const char *item_desc_floor;
	const char *item_desc_exam;
	int hidden;
	int takeable;
	int location;
};

#define NO 0
#define YES 1

/* non-takeable items should be listed first, so that they will appear before
 * anything dropped in the room.
 */
struct item items[] = {
	{
		0,
		"blacksmith","old",
		"There is an old blacksmith here, shaping metal on an anvil with his hammer.",
		"The blacksmith watches you as you browse around his shop, but he keeps working.",
		NO,
		NO,
		6
	},
	{
		1,
		"blacksmith","old",
		"There is an old blacksmith here, carefully inspecting a gold owl statuette.",
		"The blacksmith mutters to himself happily as he looks at his treasure.",
		NO,
		NO,
		-1
	},
	{
		2,
		"sign","wooden",
		"There is a wooden sign near the cave entrance.",
		"The sign says 'DO NOT ENTER. THIS CAVE IS EMPTY.'",
		NO,
		NO,
		9
	},
	{
		3,
		"statue","stone",
		"There is an enormous stone statue of a warrior blocking the path to the east.",
		"The statue of the warrior is an elongated sphere, giving the impression that the\n"
		"ancient warrior is a giant egg. He is holding a spear in his left hand and a\n"
		"small, round shield in his right hand. There is an inscription that says:\n"
		"ON Y TH  BR VE MA   ASS.",
		NO,
		NO,
		24
	},
	{
		4,
		"kiosk","stone",
		"There is a stone kiosk with a blue stone on top in the middle of the clearing.",
		"The kiosk has a pyramid-shaped blue stone on top. There is a small flat hole near\n"
		"the stone.",
		NO,
		NO,
		18
	},
	{
		5,
		"kiosk","stone",
		"There is a stone kiosk with a green stone on top in the middle of the clearing.",
		"The kiosk has a sphere-shaped green stone on top. There is a small flat hole\n"
		"near the stone.",
		NO,
		NO,
		-1
	},
	{
		6,
		"kiosk","stone",
		"There is a stone kiosk with a red stone on top in the middle of the clearing.",
		"The kiosk has a cube-shaped red stone on top. There is a small flat hole near\n"
		"the stone.",
		NO,
		NO,
		-1
	},
	{
		7,
		"path","tunnel",
		"There is an underground tunnel path that leads to the north.",
		"You can enter the path by climbing down a ladder.",
		NO,
		NO,
		-1
	},
	{
		8,
		"ladder","extended",
		"There is an extended ladder propped up against the rockslide.",
		"The ladder is secure enough to climb.",
		NO,
		NO,
		-1
	},
	{
		9,
		"gate","locked",
		"There is a locked gate blocking the lower entrance to tower.",
		"The gate is impassable, but there is a large keyhole in it.",
		NO,
		NO,
		29
	},
	{
		10,
		"gate","locked",
		"There is a locked gate blocking the upper entrance to the tower.",
		"The gate is impassible, but there is a large keyhole in it.",
		NO,
		NO,
		30
	},
	{
		11,
		"lever","stone",
		"There is a stone lever near the gate.",
		"The stone lever is large, heavy, and old.",
		NO,
		NO,
		32
	},
	{
		12,
		"statue","golden",
		"There is a golden statue of a bird-man sitting on the throne. He looks like an\n"
		"ancient god, with large golden wings and a feathered headdress. His right hand\n"
		"holds an egg-shaped ruby, and his grasping left hand is empty.",
		"The giant bird-man statue sits silently on the throne.",
		NO,
		NO,
		33
	},
	{
		13,
		"coin","blue",
		"There is a blue coin here.",
		"The coin is carved out of stone and painted blue. There is a triangle-shaped\n"
		"hole in the center of it.",
		NO,
		YES,
		5
	},
	{
		14,
		"coin","green",
		"There is a green coin here.",
		"The coin is carved out of stone and painted green. There is a circle-shaped hole\n"
		"in the center of it.",
		YES,
		YES,
		28
	},
	{
		15,
		"coin","red",
		"There is a red coin here.",
		"The coin is carved out of stone and painted red. There is a square-shaped hole\n"
		"in the center of it.",
		YES,
		YES,
		8
	},
	{
		16,
		"statuette","gold",
		"There is a gold statuette here.",
		"The gleaming statuette looks like a regal owl.",
		YES,
		YES,
		14
	},
	{
		17,
		"sword",NULL,
		"There is a sword here.",
		"The sword is finely crafted and extra sharp. You have never seen its equal.",
		NO,
		YES,
		-1
	},
	{
		18,
		"hammer","old",
		"There is an old hammer here.",
		"It is an old blacksmith's hammer that has seen better days.",
		YES,
		YES,
		3
	},
	{
		19,
		"ladder","collapsible",
		"There is a collapsible ladder here.",
		"The ladder can be folded to make it easier to carry.",
		NO,
		YES,
		2
	},
	{
		20,
		"key","ancient",
		"There is an ancient key here.",
		"The ancient skeleton key is carved with intricate patterns.",
		YES,
		YES,
		19
	},
	{
		21,
		"hamburger","gross",
		"There's a gross hamburger lying on the ground.",
		"Old and dirty, it's probably best to not eat that.",
		YES,
		YES,
		2
	},
	{
		22,
		"scepter","valuable",
		"There is a valuable scepter here.",
		"The scepter is heavy and ornate, lined with gold and silver, and topped with a\n"
		"shiny gem on top that is as big as your fist.",
		YES,
		YES,
		14
	},

	/* keep this last as a signal for the last item */
	{-1,NULL,NULL,NULL,NULL,-1,-1,-1}
};
