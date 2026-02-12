static int cx8802_request_acquire(struct cx8802_driver *drv)
{
struct cx88_core *core = drv->core;
unsigned int	i;


if (core->active_type_id != CX88_BOARD_NONE &&
core->active_type_id != drv->type_id)
return -EBUSY;

if (drv->type_id == CX88_MPEG_DVB) {

core->last_analog_input = core->input;
core->input = 0;
for (i = 0;
i < ARRAY_SIZE(core->board.input);
i++) {
if (core->board.input[i].type == CX88_VMUX_DVB) {
core->input = i;
break;
}
}
}

if (drv->advise_acquire) {
core->active_ref++;
if (core->active_type_id == CX88_BOARD_NONE) {
core->active_type_id = drv->type_id;
drv->advise_acquire(drv);
}

dprintk(1, "Post acquire GPIO=%x\n", cx_read(MO_GP0_IO));
}

return 0;
}