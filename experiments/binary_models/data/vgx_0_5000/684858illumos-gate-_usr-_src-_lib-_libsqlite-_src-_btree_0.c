static int newDatabase(Btree *pBt){
MemPage *pRoot;
PageOne *pP1;
int rc;
if( sqlitepager_pagecount(pBt->pPager)>1 ) return SQLITE_OK;
pP1 = pBt->page1;
rc = sqlitepager_write(pBt->page1);
if( rc ) return rc;
rc = sqlitepager_get(pBt->pPager, 2, (void**)&pRoot);
if( rc ) return rc;
rc = sqlitepager_write(pRoot);
if( rc ){
sqlitepager_unref(pRoot);
return rc;
}
strcpy(pP1->zMagic, zMagicHeader);
if( btree_native_byte_order ){
pP1->iMagic = MAGIC;
pBt->needSwab = 0;
}else{
pP1->iMagic = swab32(MAGIC);
pBt->needSwab = 1;
}
zeroPage(pBt, pRoot);
sqlitepager_unref(pRoot);
return SQLITE_OK;
}