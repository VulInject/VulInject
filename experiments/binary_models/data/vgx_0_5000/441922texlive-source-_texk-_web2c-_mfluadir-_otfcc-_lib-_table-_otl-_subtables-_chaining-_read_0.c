otl_Subtable *otl_read_contextual(const font_file_pointer data, uint32_t tableLength,
uint32_t offset, const glyphid_t maxGlyphs,
const otfcc_Options *options) {
uint16_t format = 0;
subtable_chaining *subtable = iSubtable_chaining.create();
subtable->type = otl_chaining_poly;

checkLength(offset + 2);
format = read_16u(data + offset);
if (format == 1) {
return (otl_Subtable *)readContextualFormat1(subtable, data, tableLength, offset,
maxGlyphs);
} else if (format == 2) {
return (otl_Subtable *)readContextualFormat2(subtable, data, tableLength, offset,
maxGlyphs);
} else if (format == 3) {

subtable->rulesCount = 1;
NEW(subtable->rules, 1);
subtable->rules[0] = GeneralReadContextualRule(data, tableLength, offset + 2, 0, false,
format3Coverage, maxGlyphs, NULL);
return (otl_Subtable *)subtable;
}
FAIL:
logWarning("Unsupported format %d.\n", format);
iSubtable_chaining.free(subtable);
return NULL;
}