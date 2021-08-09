The Channel 0 and Channel 1 are both clocks

Random falling edge Channel 0

```
ΔT	0.000011399722873894902	s
Nfalling	33	
Nrising	32	
fmin	2777777.7777732867	Hz
fmax	2941176.472113291	Hz
fmean	2821869.488531593	Hz
Tstd	9.136068236167558e-9	s
fbaud	6250000.006897949	Hz
Tavg	3.5437500000057296e-7	s
```

Random rising edge Channel 0

```
ΔT	0.000011415651001822624	s
Nfalling	33	
Nrising	32	
fmin	2777777.7777732867	Hz
fmax	2941176.4681794904	Hz
fmean	2821869.488531593	Hz
Tstd	9.136068091659642e-9	s
fbaud	6250000.006897949	Hz
Tavg	3.5437500000057296e-7	s

```

Random 2 pulses from Channel 0

```
ΔT	0.0000453602230157113	s
Nfalling	129	
Nrising	128	
fmin	2777777.77601886	Hz
fmax	2941176.472113291	Hz
fmean	2823114.247911167	Hz
Tstd	9.102165110759465e-9	s
fbaud	6250000.006897949	Hz
Tavg	3.542187499991911e-7	s

```

# NOTE:We count the pulses from the CLK/channel1

```
https://e2e.ti.com/support/audio-group/audio/f/audio-forum/995473/pcm1808-q1-rise-time-fall-time-of-lrck-and-bck
```

```
https://github.com/roel0/PCM2Wav-py
```

I found a python module:

```PCM2Wav```

and wrote a very simple script to get the ```.csv``` file from saleae and make a wav file from it

Note: The data must be in a 2's complement from the saleae

We open the wav file in audacity play with the settings and get the flag on the spectrogram

## FLAG: ##

```HHV{d1n0554ur_f00d_54y5_wh47}```
