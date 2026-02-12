static int sdsi_update_registers(struct sdsi_dev *s)
{
FILE *regs_ptr;
int ret;

memset(&s->regs, 0, sizeof(s->regs));


ret = chdir(s->dev_path);
if (ret == -1) {
perror("chdir");
return ret;
}

regs_ptr = fopen("registers", "r");
if (!regs_ptr) {
perror("Could not open 'registers' file");
return -1;
}

if (s->guid != GUID_V1 && s->guid != GUID_V2) {
fprintf(stderr, "Unrecognized guid, 0x%x\n", s->guid);
fclose(regs_ptr);
return -1;
}


ret = fread(&s->regs, sizeof(uint8_t), sizeof(s->regs), regs_ptr);
if ((s->guid == GUID_V1 && ret != REGS_SIZE_GUID_V1) ||
(s->guid == GUID_V2 && ret != REGS_SIZE_GUID_V2)) {
fprintf(stderr, "Could not read 'registers' file\n");
fclose(regs_ptr);
return -1;
}

fclose(regs_ptr);

return 0;
}