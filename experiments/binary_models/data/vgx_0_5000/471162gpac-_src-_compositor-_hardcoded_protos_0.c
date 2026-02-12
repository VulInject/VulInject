void compositor_init_test_sensor(GF_Compositor *compositor, GF_Node *node)
{
TestSensor ts;
if (TestSensor_GetNode(node, &ts)) {
GF_Err e;
TestSensorStack *stack;
GF_SAFEALLOC(stack, TestSensorStack);
if (!stack) {
GF_LOG(GF_LOG_ERROR, GF_LOG_COMPOSE, ("[Compositor] Failed to allocate test sensor stack\n"));
return;
}
gf_node_set_private(node, stack);
gf_node_set_callback_function(node, TraverseTestSensor);
stack->ts = ts;

e = gf_node_set_proto_eventin_handler(node, 0, TestSensor_OnTrigger);
if (e) {
GF_LOG(GF_LOG_ERROR, GF_LOG_COMPOSE, ("[Compositor] Failed to initialize Proto TestSensor callback: %s\n", gf_error_to_string(e) ));
}
} else {
GF_LOG(GF_LOG_DEBUG, GF_LOG_COMPOSE, ("[Compositor] Unable to initialize test sensor\n"));
}
}