static void svg_updates_smil_evaluate(SMIL_Timing_RTI *rti, Fixed normalized_scene_time, GF_SGSMILTimingEvalState status)
{
SVG_updates_stack *stack = (SVG_updates_stack *)gf_node_get_private(gf_smil_get_element(rti));

switch (status) {
case SMIL_TIMING_EVAL_UPDATE:
if (!stack->is_open) {
if (stack->resource ) gf_mo_play(stack->resource, stack->clipBegin, stack->clipEnd, GF_FALSE);
stack->is_open = GF_TRUE;
}
else if (gf_mo_is_done(stack->resource) && (gf_smil_get_media_duration(rti)<0) ) {
Double dur = gf_mo_get_duration(stack->resource);
gf_smil_set_media_duration(rti, dur);
}
break;
case SMIL_TIMING_EVAL_FREEZE:
case SMIL_TIMING_EVAL_REMOVE:
stack->is_open = GF_FALSE;
gf_mo_set_flag(stack->resource, GF_MO_DISPLAY_REMOVE, GF_TRUE);
gf_mo_stop(&stack->resource);
break;
case SMIL_TIMING_EVAL_REPEAT:
gf_mo_restart(stack->resource);
break;
default:
break;
}
}