# fp32-error
Adding many floating point numbers together one after the other increases the effect of the error significantly.

By adding approximately 32 million randomly generated floats between 0 and 1, the result will eventually converge at, and never exceeds 16,777,216 (2^24), no matter how many are added on afterward

```
[00000000/34603008] Total is: 32648.099609 (difference: 32648.099609)
[00065536/34603008] Total is: 65487.460938 (difference: 32839.359375)
[00131072/34603008] Total is: 98175.164063 (difference: 32687.703125)
[00196608/34603008] Total is: 131006.250000 (difference: 32831.085938)
...
[33423360/34603008] Total is: 16743061.000000 (difference: 32591.000000)
[33488896/34603008] Total is: 16775923.000000 (difference: 32862.000000)
[33554432/34603008] Total is: 16777216.000000 (difference: 1293.000000)
[33619968/34603008] Total is: 16777216.000000 (difference: 0.000000)
[33685504/34603008] Total is: 16777216.000000 (difference: 0.000000)
```