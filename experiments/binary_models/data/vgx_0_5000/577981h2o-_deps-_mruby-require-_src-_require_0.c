} while (0)

int mkstemp(char *template)
{
DWORD pathSize;
char pathBuffer[1000];
char tempFilename[MAX_PATH];
UINT uniqueNum;
pathSize = GetTempPath(1000, pathBuffer);
if (pathSize < 1000) { pathBuffer[pathSize] = 0; }
else                 { pathBuffer[0] = 0; }
uniqueNum = GetTempFileName(pathBuffer, template, 0, tempFilename);
if (uniqueNum == 0) return -1;
strncpy(template, tempFilename, MAX_PATH);
return open(tempFilename, _O_RDWR|_O_BINARY);
}

static void
replace_stop_with_return(mrb_state *mrb, mrb_irep *irep)
{
if (irep->iseq[irep->ilen - 1] == MKOP_A(OP_STOP, 0)) {
irep->iseq = mrb_realloc(mrb, irep->iseq, (irep->ilen + 1) * sizeof(mrb_code));
irep->iseq[irep->ilen - 1] = MKOP_A(OP_LOADNIL, 0);
irep->iseq[irep->ilen] = MKOP_AB(OP_RETURN, 0, OP_R_NORMAL);
irep->ilen++;
}
}