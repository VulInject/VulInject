void
find_method(fcode_env_t *env)
{
fstack_t d;
device_t *device;
acf_t acf = 0;

CHECK_DEPTH(env, 3, "find-method");
if (find_method_hook) {
(*find_method_hook)(env);
if (TOS)		
return;
POP(DS);
}

d = POP(DS);
CONVERT_PHANDLE(env, device, d);
PUSH(DS, (fstack_t)&device->vocabulary);
acf = voc_find(env);
PUSH(DS, (fstack_t)acf);
if (acf) {
PUSH(DS, TRUE);
}
}