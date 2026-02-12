static rsRetVal initTCP(wrkrInstanceData_t *pWrkrData);


BEGINinitConfVars		
CODESTARTinitConfVars
cs.pszTplName = NULL; 
cs.pszStrmDrvr = NULL; 
cs.iStrmDrvrMode = 0; 
cs.bResendLastOnRecon = 0; 
cs.pszStrmDrvrAuthMode = NULL; 
cs.iUDPRebindInterval = 0;	
cs.iTCPRebindInterval = 0;	
cs.pPermPeers = NULL;
ENDinitConfVars


static rsRetVal doTryResume(wrkrInstanceData_t *);
static rsRetVal doZipFinish(wrkrInstanceData_t *);


static uchar*
getDfltTpl(void)
{
if(loadModConf != NULL && loadModConf->tplName != NULL)
return loadModConf->tplName;
else if(cs.pszTplName == NULL)
return (uchar*)"RSYSLOG_TraditionalForwardFormat";
else
return cs.pszTplName;
}