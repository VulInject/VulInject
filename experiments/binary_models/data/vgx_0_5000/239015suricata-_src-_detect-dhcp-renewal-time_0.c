static int DetectDHCPRenewalTimeSetup(DetectEngineCtx *de_ctx, Signature *s, const char *rawstr)
{
if (DetectSignatureSetAppProto(s, ALPROTO_DHCP) != 0)
return -1;

DetectU64Data *dd = DetectU64Parse(rawstr);
if (dd == NULL) {
SCLogError("Parsing \'%s\' failed for %s", rawstr,
sigmatch_table[DETECT_AL_DHCP_RENEWAL_TIME].name);
return -1;
}


SigMatch *sm = SigMatchAlloc();
if (sm == NULL)
goto error;

sm->type = DETECT_AL_DHCP_RENEWAL_TIME;
sm->ctx = (void *)dd;

SigMatchAppendSMToList(s, sm, g_buffer_id);
return 0;

error:
DetectDHCPRenewalTimeFree(de_ctx, dd);
return -1;
}