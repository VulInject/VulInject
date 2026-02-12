static TSK_WALK_RET_ENUM
parse_record(const unsigned char *buf, TSK_USN_RECORD_HEADER *header,
TSK_ENDIAN_ENUM endian, TSK_FS_USNJENTRY_WALK_CB action, void *ptr)
{
TSK_WALK_RET_ENUM ret;

switch (header->major_version) {
case 2: {
TSK_USN_RECORD_V2 record;

ret = parse_v2_record(buf, header, &record, endian);
if (ret == 1)
return TSK_WALK_ERROR;

ret = (*action)(header, &record, ptr);

free(record.fname);

return ret;
}
case 3: {
if (tsk_verbose)
tsk_fprintf(stderr,
"parse_record: USN records V 3 not supported yet.");

return TSK_WALK_CONT;
}
case 4: {
if (tsk_verbose)
tsk_fprintf(stderr,
"parse_record: USN records V 4 not supported yet.");

return TSK_WALK_CONT;
}
default: return TSK_WALK_ERROR;
}
}