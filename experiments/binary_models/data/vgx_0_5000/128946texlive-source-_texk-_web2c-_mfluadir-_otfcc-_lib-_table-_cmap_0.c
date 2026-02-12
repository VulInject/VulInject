static uint8_t buildFormat14ForSelector(const table_cmap *cmap, unicode_t selector,
caryll_Buffer *dflt, caryll_Buffer *nondflt) {
glyphid_t *defaults, *nonDefaults;
NEW_CLEAN_N(defaults, MAX_UNICODE);
NEW_CLEAN_N(nonDefaults, MAX_UNICODE);
for (unicode_t s = 0; s < MAX_UNICODE; s++) {
defaults[s] = 0xFFFF;
nonDefaults[s] = 0xFFFF;
}
cmap_UVS_Entry *item;
foreach_hash(item, cmap->uvs) {
unicode_t u = item->key.unicode;
if (item->key.selector != selector || u >= MAX_UNICODE) continue;
if (!item->glyph.name) continue;
glyphid_t uvsGID = item->glyph.index;
otfcc_GlyphHandle *g = table_iCmap.lookup(cmap, (int)u);
if (!g) {
nonDefaults[u] = uvsGID;
} else if (uvsGID == g->index) {
defaults[u] = uvsGID;
} else {
nonDefaults[u] = uvsGID;
}
}

defaults[0] = nonDefaults[0] = 0xFFFF;                             
defaults[MAX_UNICODE - 1] = nonDefaults[MAX_UNICODE - 1] = 0xFFFF; 

uint32_t numUnicodeValueRanges = 0;
unicode_t startUnicodeValue = 0;
uint32_t numUVSMappings = 0;
bufwrite32b(dflt, 0);
bufwrite32b(nondflt, 0);
for (unicode_t u = 1; u < MAX_UNICODE; u++) {
if (defaults[u] != 0xFFFF && defaults[u - 1] == 0xFFFF) { startUnicodeValue = u; }
if (defaults[u] == 0xFFFF && defaults[u - 1] != 0xFFFF) {
writeDefaultRange(dflt, &numUnicodeValueRanges, startUnicodeValue, u - 1);
}

if (nonDefaults[u] != 0xFFFF) {
bufwrite24b(nondflt, u);
bufwrite16b(nondflt, nonDefaults[u]);
numUVSMappings++;
}
}
bufseek(dflt, 0);
bufwrite32b(dflt, numUnicodeValueRanges);
bufseek(nondflt, 0);
bufwrite32b(nondflt, numUVSMappings);

FREE(defaults);
FREE(nonDefaults);

return (numUnicodeValueRanges ? HAS_DEFAULT : 0) | (numUVSMappings ? HAS_NON_DEFAULT : 0);
}