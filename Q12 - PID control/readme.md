# PID controller

##  Summary
![](res/2021-07-21-16-46-05.png)

Implementation
```
def run(robot, tau_p, tau_d, tau_i, n=100, speed=1.0):
    x_trajectory = []
    y_trajectory = []
    prev_cte = robot.y
    int_cte = 0
    for i in range(n):
        cte = robot.y
        diff_cte = cte - prev_cte
        prev_cte = cte
        int_cte += cte
        steer = -tau_p * cte - tau_d * diff_cte - tau_i * int_cte
        robot.move(steer, speed)
        x_trajectory.append(robot.x)
        y_trajectory.append(robot.y)
    return x_trajectory, y_trajectory
```


## Twiddle parameter optimization (coordinate ascent)


![](res/2021-07-21-16-50-26.png)

Implementation

```
 while sum(dp) > tolerance:
        for i in range(len(p)):
            p[i] += dp[i]
            
            # test modified controller with pant
            # Obtain error (err)

            # If it gives good result keep increasing 
            if err  <  best_err: 
                best_err = err
                dp[i] *=1.1
            # If results are not good --> Decrease
            else:
                p[i] -= 2*dp[i]
                # test modified controller with pant
                # Obtain error
                if err  <  best_err:
                    best_err = err
                    dp[i] *=1.1
            # If the results are always worse, try smaller parameters 
                else:
                    p[i] += dp[i]
                    dp[i] *=0.9
```

***
## Other papers of interest

* [Vision-Based High Speed Driving with a Deep Dynamic Observer](https://arxiv.org/abs/1812.02071)
* [Reinforcement Learning and Deep Learning based Lateral Control for Autonomous Driving](https://arxiv.org/abs/1810.12778)

* [ChauffeurNet: Learning to Drive by Imitating the Best and Synthesizing the Worst ](https://arxiv.org/abs/1812.03079)