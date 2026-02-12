mDNSexport mStatus QueryRecordClientRequestStart(QueryRecordClientRequest *inRequest,
const QueryRecordClientRequestParams *inParams, QueryRecordResultHandler inResultHandler, void *inResultContext)
{
mStatus             err;
domainname          qname;
mDNSInterfaceID     interfaceID;
mDNSBool            appendSearchDomains;
QueryRecordOpParams opParams;
dnssec_context_t *  dnssecContext = mDNSNULL;

err = InterfaceIndexToInterfaceID(inParams->interfaceIndex, &interfaceID);
if (err) goto exit;

if (!MakeDomainNameFromDNSNameString(&qname, inParams->qnameStr))
{
LogRedact(MDNS_LOG_CATEGORY_DEFAULT, MDNS_LOG_DEFAULT,
"[R%u] ERROR: bad domain name '" PRI_S "'", inParams->requestID, inParams->qnameStr);
err = mStatus_BadParamErr;
goto exit;
}

if (RecordTypeIsAddress(inParams->qtype) && !StringEndsWithDot(inParams->qnameStr) &&
(AlwaysAppendSearchDomains || DomainNameIsSingleLabel(&qname)))
{
appendSearchDomains = mDNStrue;
}
else
{
appendSearchDomains = mDNSfalse;
}
QueryRecordOpParamsInit(&opParams);
opParams.requestID              = inParams->requestID;
opParams.qname                  = &qname;
opParams.qtype                  = inParams->qtype;
opParams.qclass                 = inParams->qclass;
opParams.interfaceID            = interfaceID;
opParams.appendSearchDomains    = appendSearchDomains;
opParams.effectivePID           = inParams->effectivePID;
opParams.effectiveUUID          = inParams->effectiveUUID;
opParams.peerUID                = inParams->peerUID;
opParams.resolverUUID           = inParams->resolverUUID;
opParams.customID               = inParams->customID;
opParams.needEncryption         = inParams->needEncryption;
opParams.peerAuditToken         = inParams->peerAuditToken;
opParams.delegatorAuditToken    = inParams->delegatorAuditToken;
opParams.isInAppBrowserRequest  = inParams->isInAppBrowserRequest;


if (FLAGS_CONTAIN_DNSOK_BIT(inParams->flags) && is_eligible_for_dnssec(&qname, inParams->qtype))
{
opParams.flags = inParams->flags | kDNSServiceFlagsReturnIntermediates; 
err = create_dnssec_context_t(inRequest, inParams->requestID, &qname, inParams->qtype, inParams->qclass,
interfaceID, -1, inParams->flags, appendSearchDomains, inParams->effectivePID, inParams->effectiveUUID,
inParams->peerUID,
inParams->peerAuditToken, inParams->delegatorAuditToken,
mDNSNULL, inParams->needEncryption, inParams->customID,
inResultHandler, inResultContext, mDNSNULL, &dnssecContext);
require_action(err == mStatus_NoError, exit, log_debug("create_dnssec_context_t failed; error_description='%s'",
mStatusDescription(err)));

err = QueryRecordOpStart(&inRequest->op, &opParams, query_record_result_reply_with_dnssec, dnssecContext);
} else
{
opParams.flags = inParams->flags;
err = QueryRecordOpStart(&inRequest->op, &opParams, inResultHandler, inResultContext);
}

exit:
if (err) QueryRecordClientRequestStop(inRequest);
return err;
}