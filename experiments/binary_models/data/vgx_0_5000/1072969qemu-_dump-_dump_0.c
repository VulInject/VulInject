static void vmcoreinfo_update_phys_base(DumpState *s)
{
uint64_t size, note_head_size, name_size, phys_base;
char **lines;
uint8_t *vmci;
size_t i;

if (!note_name_equal(s, s->guest_note, "VMCOREINFO")) {
return;
}

get_note_sizes(s, s->guest_note, &note_head_size, &name_size, &size);
note_head_size = ROUND_UP(note_head_size, 4);

vmci = s->guest_note + note_head_size + ROUND_UP(name_size, 4);
*(vmci + size) = '\0';

lines = g_strsplit((char *)vmci, "\n", -1);
for (i = 0; lines[i]; i++) {
const char *prefix = NULL;

if (s->dump_info.d_machine == EM_X86_64) {
prefix = "NUMBER(phys_base)=";
} else if (s->dump_info.d_machine == EM_AARCH64) {
prefix = "NUMBER(PHYS_OFFSET)=";
}

if (prefix && g_str_has_prefix(lines[i], prefix)) {
if (qemu_strtou64(lines[i] + strlen(prefix), NULL, 16,
&phys_base) < 0) {
warn_report("Failed to read %s", prefix);
} else {
s->dump_info.phys_base = phys_base;
}
break;
}
}

g_strfreev(lines);
}