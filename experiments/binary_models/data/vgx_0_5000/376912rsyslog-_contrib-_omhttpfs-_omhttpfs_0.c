static rsRetVal
httpfs_create_file(wrkrInstanceData_t *pWrkrData, uchar* buf)
{



HTTPFS_CURL_VARS_INIT
DBGPRINTF("%s(): file=%s\n", __FUNCTION__, pWrkrData->file);
httpfs_curl_set_put(pWrkrData->curl);


httpfs_set_url(pWrkrData, "&op=create&overwrite=false&data=true");

curl_easy_setopt(pWrkrData->curl, CURLOPT_POSTFIELDS, (char*)buf);
curl_easy_setopt(pWrkrData->curl, CURLOPT_POSTFIELDSIZE, strlen((char*) buf));

DBGPRINTF("%s(): msg=%s\n", __FUNCTION__, buf);

headers = httpfs_curl_add_header(headers, 1, HTTPFS_CONTENT_TYPE);
curl_easy_setopt(pWrkrData->curl, CURLOPT_HTTPHEADER, headers);

HTTPFS_CURL_EXEC

int success = 0;

if (response_code == 201) {
success = 1;
}

HTTPFS_CURL_VARS_RELEASE
if (success) {
return RS_RET_OK;
} else {
return RS_RET_FALSE;
}
}