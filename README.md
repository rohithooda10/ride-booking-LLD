# Ride Booking App (LLD)

This repository contains a Low-Level Design (LLD) implementation for a ride booking application. The project demonstrates modular and object-oriented programming principles for a scalable and efficient system. It includes core functionalities such as user and driver management, ride booking, payment handling, and location services.

## Features

- **User Management**: Handles user profiles.
- **Driver Management**: Manages driver profiles, availability, and ride assignments.
- **Ride Booking**: Facilitates ride requests, matching users with drivers, and tracking rides.
- **Payment Processing**: Supports multiple payment strategies, such as card and PayPal, for seamless transactions.
- **Location Services**: Manages user and driver locations for efficient ride matching.
- **Service-Oriented Design**: Modular services for ride and payment operations, ensuring maintainability.

## File Overview

- **`cardStrategy.cpp`**: Implements payment processing using card payment strategy.
- **`driver.cpp`**: Handles driver information, availability, and ride assignments.
- **`location.cpp`**: Provides geolocation functionalities for users and drivers.
- **`main.cpp`**: Entry point for the application, coordinating all services.
- **`payment.cpp`**: Manages payment operations and strategy selection.
- **`paymentService.cpp`**: Encapsulates payment services for modularity.
- **`paypalStrategy.cpp`**: Implements payment processing using PayPal strategy.
- **`ride.cpp`**: Contains the ride-related logic such as fare calculation and ride details.
- **`rideService.cpp`**: Handles ride matching, booking, and tracking.
- **`user.cpp`**: Manages user profiles.

## How to Use

1. **Clone the Repository**
2. **Compile the Code:** Use a C++ compiler to compile the project. For example:

```bash
g++ cardStrategy.cpp driver.cpp location.cpp main.cpp payment.cpp paymentService.cpp paypalStrategy.cpp ride.cpp rideService.cpp user.cpp -o RideBookingApp
```

3. **Run the Application:**

```bash
./RideBookingApp
```

## Dependencies

C++17 or later
A C++ compiler (e.g., GCC, Clang)

## Contribution

Contributions are welcome! Feel free to open issues or submit pull requests.
