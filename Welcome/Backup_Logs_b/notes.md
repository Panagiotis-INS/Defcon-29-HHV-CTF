# Author: Panagiotis Fiskilis/Neuro

# Challenge name:Defcon 29 HHV:Backup Logs(b)

Lore:

```
We need to start cleaning up after that storm. First things first, let's check on the status of things around the park. Luckily, we installed serial connections to the different labs and enclosures around. These communication lines are pretty cool, not only do they serve as heartbeat monitors for the different endpoints, they also allow us to exchange serial communications when necessary. Can you take a look and see if there's any information we can gain from them?

(Note: this has two flags, if you find a flag and it doesn't work as the solution for this challenge, try it on Backup Logs (a))
```

# Solution

We use the ```.sal``` file from the first challenge on the SEALE and add an async serial(with default seetings) after checking all the channels we go to the last one and find the flag

** Flag: **
HHV{s3E_tH3_b1G_p1Ctur3}
