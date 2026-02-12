static void
popdown_dialog_and_print_or_save(XtPointer myinfo)
{
struct save_or_print_info *info = (struct save_or_print_info *)myinfo;

cb_popdown(NULL, info, NULL);

if (globals.dvi_file.bak_fp == NULL) { 
info->message_popup = popup_message(globals.widgets.top_level,
MSG_ERR, NULL,
"No active DVI file");
return;
}

ASSERT(info->finfo->in_fp != NULL, "DVI input FILE * must have been set!");

store_preference(NULL, "dvipsOptionsString", "%s", info->dvips_options ? info->dvips_options : "");
if (info->act == FILE_PRINT) {
store_preference(NULL, "defaultPrintingTarget", "%d", info->print_target);
store_preference(NULL, "dvipsPrinterString", "%s", info->printer_options ? info->printer_options : "");
internal_print(info);
}
else {
store_preference(NULL, "defaultSavingFormat", "%d", info->fmt);
internal_save(info);
}
}