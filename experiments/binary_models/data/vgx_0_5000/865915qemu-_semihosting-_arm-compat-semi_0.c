static uint32_t featurefile_readfn(CPUState *cs, GuestFD *gf,
target_ulong buf, uint32_t len)
{
CPUArchState *env = cs->env_ptr;
uint32_t i;
char *s;

(void) env; 
s = lock_user(VERIFY_WRITE, buf, len, 0);
if (!s) {
return len;
}

for (i = 0; i < len; i++) {
if (gf->featurefile_offset >= sizeof(featurefile_data)) {
break;
}
s[i] = featurefile_data[gf->featurefile_offset];
gf->featurefile_offset++;
}

unlock_user(s, buf, len);


return len - i;
}