unsigned short
SiS_GetOffset(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, unsigned short RRTI)
{
unsigned short xres, temp, colordepth, infoflag;

if(SiS_Pr->UseCustomMode) {
infoflag = SiS_Pr->CInfoFlag;
xres = SiS_Pr->CHDisplay;
} else {
infoflag = SiS_Pr->SiS_RefIndex[RRTI].Ext_InfoFlag;
xres = SiS_Pr->SiS_RefIndex[RRTI].XRes;
}

colordepth = SiS_GetColorDepth(SiS_Pr, ModeNo, ModeIdIndex);

temp = xres / 16;
if(infoflag & InterlaceMode) temp <<= 1;
temp *= colordepth;
if(xres % 16) temp += (colordepth >> 1);

return temp;
}