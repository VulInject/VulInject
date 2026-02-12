static int saa7127_set_input_type(struct v4l2_subdev *sd, int input)
{
struct saa7127_state *state = to_state(sd);

switch (input) {
case SAA7127_INPUT_TYPE_NORMAL:	
v4l2_dbg(1, debug, sd, "Selecting Normal Encoder Input\n");
state->reg_3a_cb = 0;
break;

case SAA7127_INPUT_TYPE_TEST_IMAGE:	
v4l2_dbg(1, debug, sd, "Selecting Color Bar generator\n");
state->reg_3a_cb = 0x80;
break;

default:
return -EINVAL;
}
saa7127_write(sd, 0x3a, state->reg_3a | state->reg_3a_cb);
state->input_type = input;
return 0;
}