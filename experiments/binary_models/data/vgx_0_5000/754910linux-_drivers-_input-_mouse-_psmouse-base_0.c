static int genius_detect(struct psmouse *psmouse, bool set_properties)
{
struct ps2dev *ps2dev = &psmouse->ps2dev;
u8 param[4];

param[0] = 3;
ps2_command(ps2dev, param, PSMOUSE_CMD_SETRES);
ps2_command(ps2dev,  NULL, PSMOUSE_CMD_SETSCALE11);
ps2_command(ps2dev,  NULL, PSMOUSE_CMD_SETSCALE11);
ps2_command(ps2dev,  NULL, PSMOUSE_CMD_SETSCALE11);
ps2_command(ps2dev, param, PSMOUSE_CMD_GETINFO);

if (param[0] != 0x00 || param[1] != 0x33 || param[2] != 0x55)
return -ENODEV;

if (set_properties) {
__set_bit(BTN_MIDDLE, psmouse->dev->keybit);
__set_bit(BTN_EXTRA, psmouse->dev->keybit);
__set_bit(BTN_SIDE, psmouse->dev->keybit);
__set_bit(REL_WHEEL, psmouse->dev->relbit);

psmouse->vendor = "Genius";
psmouse->name = "Mouse";
psmouse->pktsize = 4;
}

return 0;
}