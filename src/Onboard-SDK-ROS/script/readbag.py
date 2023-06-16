#! /usr/bin/env python
# coding=utf-8

import rosbag

bag = rosbag.Bag('/media/dji/b1b64b99-f4a7-4025-9b5d-d2caab7cc6fb/bag/2021-03-31--08-42-44.bag')

for topic, msg, t in bag.read_messages():
  print(msg)

bag.close()


