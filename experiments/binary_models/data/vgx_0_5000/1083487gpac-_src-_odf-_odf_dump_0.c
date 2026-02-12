GF_Err gf_odf_dump_lang(GF_Language *ld, FILE *trace, u32 indent, Bool XMTDump)
{
char sLan[4];
StartDescDump(trace, "LanguageDescriptor", indent, XMTDump);
indent++;
sLan[0] = (ld->langCode>>16)&0xFF;
sLan[1] = (ld->langCode>>8)&0xFF;
sLan[2] = (ld->langCode)&0xFF;
sLan[3] = 0;
DumpString(trace, "languageCode", sLan, indent, XMTDump);
indent--;
EndSubElement(trace, indent, XMTDump);
if (!XMTDump) EndDescDump(trace, "LanguageDescriptor", indent, XMTDump);
return GF_OK;
}