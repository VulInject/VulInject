static void waitForChild(instanceConf_t *pInst)
{
int status;
int ret;
long counter;

counter = pInst->lCloseTimeout / 10;
while ((ret = waitpid(pInst->pid, &status, WNOHANG)) == 0 && counter > 0) {
srSleep(0, 10000);  
--counter;
}

if (ret == 0) {  
if (!pInst->bKillUnresponsive) {
LogMsg(0, NO_ERRCODE, LOG_WARNING, "improg: program '%s' (pid %ld) did not terminate "
"within timeout (%ld ms); ignoring it", pInst->pszBinary, (long int)pInst->pid,
pInst->lCloseTimeout);
return;
}

LogMsg(0, NO_ERRCODE, LOG_WARNING, "improg: program '%s' (pid %ld) did not terminate "
"within timeout (%ld ms); killing it", pInst->pszBinary, (long int)pInst->pid,
pInst->lCloseTimeout);
if (kill(pInst->pid, SIGKILL) == -1) {
LogError(errno, RS_RET_SYS_ERR, "improg: could not send SIGKILL to child process");
return;
}

ret = waitpid(pInst->pid, &status, 0);
}


if(ret == pInst->pid) {
glblReportChildProcessExit(runConf, pInst->pszBinary, pInst->pid, status);
}
}