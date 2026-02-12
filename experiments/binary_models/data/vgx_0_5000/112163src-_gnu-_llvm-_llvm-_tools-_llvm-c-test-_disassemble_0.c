static void do_disassemble(const char *triple, const char *features,
unsigned char *buf, int siz) {
LLVMDisasmContextRef D = LLVMCreateDisasmCPUFeatures(triple, "", features,
NULL, 0, NULL, NULL);
char outline[1024];
int pos;

if (!D) {
printf("ERROR: Couldn't create disassembler for triple %s\n", triple);
return;
}

pos = 0;
while (pos < siz) {
size_t l = LLVMDisasmInstruction(D, buf + pos, siz - pos, 0, outline,
sizeof(outline));
if (!l) {
pprint(pos, buf + pos, 1, "\t???");
pos++;
} else {
pprint(pos, buf + pos, l, outline);
pos += l;
}
}

LLVMDisasmDispose(D);
}