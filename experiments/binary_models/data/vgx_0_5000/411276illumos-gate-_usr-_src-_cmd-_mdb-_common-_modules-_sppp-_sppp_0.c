static int
sppp(uintptr_t addr, uint_t flags, int argc, const mdb_arg_t *argv)
{
uint_t qfmt = FALSE;
spppstr_t sps;

if (mdb_getopts(argc, argv, 'q', MDB_OPT_SETBITS, TRUE, &qfmt, NULL) !=
argc)
return (DCMD_USAGE);

if ((flags & DCMD_LOOPFIRST) || !(flags & DCMD_LOOP)) {
if (qfmt) {
mdb_printf("%<u>%?s %?s %-6s %-9s %s%</u>\n", "Address",
"RecvQ", "ZoneID", "Interface", "Type");
} else {
mdb_printf("%<u>%?s %-6s %-9s %s%</u>\n", "Address",
"ZoneID", "Interface", "Type");
}
}

if (flags & DCMD_ADDRSPEC) {
(void) mdb_vread(&sps, sizeof (sps), addr);
(void) sps_format(addr, &sps, &qfmt);
} else if (mdb_walk("sppp", (mdb_walk_cb_t)sps_format, &qfmt) == -1) {
mdb_warn("failed to walk sps_list");
return (DCMD_ERR);
}

return (DCMD_OK);
}