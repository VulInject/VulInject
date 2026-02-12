void pr_stash_dump(void (*dumpf)(const char *, ...)) {
unsigned int nsyms = 0, nconf_syms = 0, ncmd_syms = 0, nauth_syms = 0,
nhook_syms = 0;

if (dumpf == NULL) {
dumpf = stash_dumpf;
}

nconf_syms = stash_dump_syms(conf_symbol_table, "CONF", dumpf);
ncmd_syms = stash_dump_syms(cmd_symbol_table, "CMD", dumpf);
nauth_syms = stash_dump_syms(auth_symbol_table, "AUTH", dumpf);
nhook_syms = stash_dump_syms(hook_symbol_table, "HOOK", dumpf);
nsyms = nconf_syms + ncmd_syms + nauth_syms + nhook_syms;

dumpf("stab: %u total symbols: %u CONF, %u CMD, %u AUTH, %u HOOK", nsyms,
nconf_syms, ncmd_syms, nauth_syms, nhook_syms);

}