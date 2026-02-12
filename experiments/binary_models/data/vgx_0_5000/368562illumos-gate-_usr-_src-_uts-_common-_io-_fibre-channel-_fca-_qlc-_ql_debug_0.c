void
ql_stacktrace(ql_adapter_state_t *ha)
{
int	depth, i;
pc_t	pcstack[DEBUG_STK_DEPTH];
char	*sym = NULL;
ulong_t	off;

depth = getpcstack(&pcstack[0], DEBUG_STK_DEPTH);

cmn_err(CE_CONT, "%s(%d,%d): ---------- \n", QL_NAME, ha->instance,
ha->vp_index);
for (i = 0; i < MIN(depth, DEBUG_STK_DEPTH); i++) {
sym = kobj_getsymname((uintptr_t)pcstack[i], &off);

if (sym == NULL) {
cmn_err(CE_CONT, "%s(%d,%d): sym is NULL\n", QL_NAME,
ha->instance, ha->vp_index);
} else {
cmn_err(CE_CONT, "%s(%d,%d): %s+%lx\n", QL_NAME,
ha->instance, ha->vp_index, sym ? sym : "?", off);
}
}
cmn_err(CE_CONT, "%s(%d,%d): ---------- \n", QL_NAME, ha->instance,
ha->vp_index);
}


int
ql_flash_errlog(ql_adapter_state_t *ha, uint16_t code, uint16_t d1,
uint16_t d2, uint16_t d3)
{
char		*s;
uint32_t	marker[2], fdata[2], faddr;
int		rval;

QL_PRINT_3(CE_CONT, "(%d): started\n", ha->instance);

if (ha->flash_errlog_start == 0) {
return (QL_NOT_SUPPORTED);
}

EL(ha, "code=%xh, d1=%xh, d2=%xh, d3=%xh\n", code, d1, d2, d3);


if (!(ha->flags & FLASH_ERRLOG_MARKER)) {


marker[0] = CHAR_TO_LONG(ha->fw_subminor_version,
ha->fw_minor_version, ha->fw_major_version, 'S');


if ((strlen(QL_VERSION) > 9) && (QL_VERSION[8] == '-')) {
s = &QL_VERSION[9];
} else {
s = QL_VERSION;
}

for (marker[1] = 0; *s != '\0'; s++) {
if (*s >= '0' && *s <= '9') {
marker[1] <<= 4;
marker[1] |= *s - '0';
} else if (*s != '.') {
break;
}
}


ha->flash_errlog_ptr = ha->flash_errlog_start;
for (;;) {
faddr = ha->flash_data_addr | ha->flash_errlog_ptr;
(void) ql_24xx_read_flash(ha, faddr++, &fdata[0]);
(void) ql_24xx_read_flash(ha, faddr++, &fdata[1]);
if (fdata[0] == 0xffffffff && fdata[1] == 0xffffffff) {
break;
}
(void) ql_24xx_read_flash(ha, faddr++, &fdata[0]);
(void) ql_24xx_read_flash(ha, faddr++, &fdata[1]);
ha->flash_errlog_ptr += FLASH_ERRLOG_ENTRY_SIZE;
if (ha->flash_errlog_ptr >=
ha->flash_errlog_start + FLASH_ERRLOG_SIZE) {
EL(ha, "log full\n");
return (QL_MEMORY_FULL);
}
if (fdata[0] == marker[0] && fdata[1] == marker[1]) {
ha->flags |= FLASH_ERRLOG_MARKER;
break;
}
}


if (!(ha->flags & FLASH_ERRLOG_MARKER)) {
ha->flags |= FLASH_ERRLOG_MARKER;
rval = ql_flash_errlog_store(ha, marker);
if (rval != QL_SUCCESS) {
EL(ha, "failed marker write=%xh\n", rval);
return (rval);
}
}
}


fdata[0] = SHORT_TO_LONG(d1, code);
fdata[1] = SHORT_TO_LONG(d3, d2);
rval = ql_flash_errlog_store(ha, fdata);
if (rval != QL_SUCCESS) {
EL(ha, "failed error write=%xh\n", rval);
} else {

QL_PRINT_3(CE_CONT, "(%d): done\n", ha->instance);
}

return (rval);
}