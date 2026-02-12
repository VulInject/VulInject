void CL_JoystickMove( usercmd_t *cmd ) {
float anglespeed;

float yaw     = j_yaw->value     * cl.joystickAxis[j_yaw_axis->integer];
float right   = j_side->value    * cl.joystickAxis[j_side_axis->integer];
float forward = j_forward->value * cl.joystickAxis[j_forward_axis->integer];
float pitch   = j_pitch->value   * cl.joystickAxis[j_pitch_axis->integer];
float up      = j_up->value      * cl.joystickAxis[j_up_axis->integer];

if ( !( kb[KB_SPEED].active ^ cl_run->integer ) ) {
cmd->buttons |= BUTTON_WALKING;
}

if ( kb[KB_SPEED].active ) {
anglespeed = 0.001 * cls.frametime * cl_anglespeedkey->value;
} else {
anglespeed = 0.001 * cls.frametime;
}

if ( !kb[KB_STRAFE].active ) {
cl.viewangles[YAW] += anglespeed * yaw;
cmd->rightmove = ClampChar( cmd->rightmove + (int)right );
} else {
cl.viewangles[YAW] += anglespeed * right;
cmd->rightmove = ClampChar( cmd->rightmove + (int)yaw );
}
if ( kb[KB_MLOOK].active ) {
cl.viewangles[PITCH] += anglespeed * forward;
cmd->forwardmove = ClampChar( cmd->forwardmove + (int)pitch );
} else {
cl.viewangles[PITCH] += anglespeed * pitch;
cmd->forwardmove = ClampChar( cmd->forwardmove + (int)forward );
}

cmd->upmove = ClampChar( cmd->upmove + (int)up );
}