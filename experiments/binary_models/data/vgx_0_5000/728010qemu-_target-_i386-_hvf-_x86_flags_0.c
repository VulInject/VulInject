void set_ZF(CPUX86State *env, bool val)
{
if (val) {
env->hvf_lflags.auxbits ^=
(((env->hvf_lflags.result >> LF_SIGN_BIT) & 1) << LF_BIT_SD);

uint32_t temp_pdb = (255 & env->hvf_lflags.result);
env->hvf_lflags.auxbits ^= (temp_pdb << LF_BIT_PDB);

env->hvf_lflags.result = 0;
} else {
env->hvf_lflags.result |= (1 << 8);
}
}