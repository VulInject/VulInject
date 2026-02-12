static void unixShmPurge(unixFile *pFd){
unixShmNode *p = pFd->pInode->pShmNode;
assert( unixMutexHeld() );
if( p && ALWAYS(p->nRef==0) ){
int nShmPerMap = unixShmRegionPerMap();
int i;
assert( p->pInode==pFd->pInode );
sqlite3_mutex_free(p->mutex);
for(i=0; i<p->nRegion; i+=nShmPerMap){
if( p->h>=0 ){
osMunmap(p->apRegion[i], p->szRegion);
}else{
sqlite3_free(p->apRegion[i]);
}
}
sqlite3_free(p->apRegion);
if( p->h>=0 ){
robust_close(pFd, p->h, __LINE__);
p->h = -1;
}
p->pInode->pShmNode = 0;
sqlite3_free(p);
}
}