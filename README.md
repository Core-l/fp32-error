# fp32-error
Adding many floating point numbers together one after the other increases the effect of the error significantly.

By adding approximately 32 million randomly generated floats between 0 and 1, the result will eventually converge at, and never exceeds 16,777,216 (2^24), no matter how many are added on afterward