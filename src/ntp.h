// Get time from random server and return server address.
int64 NtpGetTime(CNetAddr& ip);

// Get time from provided server.
int64 NtpGetTime(const std::string &strHostName);

extern std::string strTrustedUpstream;

// NTP time samples thread.
void ThreadNtpSamples(void* parg);

// NTP offset
int64 GetNtpOffset();
