# Warehouse Robot Task Planner

## Overview

Warehouse Robot Task Planner is a ROS2-based robotics software project that simulates an autonomous mobile robot operating in a warehouse environment. The system is designed to receive transportation tasks, navigate between pickup and drop-off locations, and visualize robot behavior using robotics simulation and visualization tools.

This project is intended to demonstrate robotics software architecture, autonomous navigation, task planning, simulation, and technical documentation.

## Project Status

Current stage: Sprint 1 – Repository and Simulation Setup

Completed:
- GitHub repository initialized
- Project folder structure created
- Initial documentation structure created

In Progress:
- ROS2 workspace setup
- Simulation environment setup

Planned:
- Warehouse simulation world
- Robot model integration
- Navigation stack configuration
- Task planning layer
- Obstacle handling
- System testing
- Demo video

## Core Objectives

- Build a modular ROS2 robotics software system
- Simulate a warehouse environment
- Spawn and visualize a mobile robot
- Send navigation goals to the robot
- Implement pickup and drop-off task execution
- Document architecture and design decisions
- Prepare the project for technical interviews and portfolio presentation

## Planned System Architecture
Task Input
   |
   v
Task Planner Node
   |
   v
Navigation Interface
   |
   v
ROS2 Navigation Stack
   |
   v
Simulated Mobile Robot
   |
   v
Gazebo / RViz Visualization
