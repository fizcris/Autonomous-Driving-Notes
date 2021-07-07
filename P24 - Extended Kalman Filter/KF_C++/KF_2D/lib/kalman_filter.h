#pragma once
#ifndef KALMAN_FILTER_H_
#define KALMAN_FILTER_H_

#include "Eigen/Dense"

using Eigen::MatrixXd;
using Eigen::VectorXd;

class KalmanFilter {
public:

	/**
	 * Constructor
	 */
	KalmanFilter();

	/**
	 * Destructor
	 */
	virtual ~KalmanFilter();

	/**
	 * Predict Predicts the state and the state covariance
	 *   using the process model
	 */
	void Predict();

	/**
	 * Updates the state and
	 * @param z The measurement at k+1
	 */
	void Update(const VectorXd& z);

	// state vector
	VectorXd x_;

	// state covariance matrix
	MatrixXd P_;

	// state transistion matrix
	MatrixXd F_;

	// process covariance matrix
	MatrixXd Q_;

	// covariance matrix of the individual noise processes.
	MatrixXd Qv_;

	// delta T linked to covariance matrix
	MatrixXd G_;

	// measurement matrix
	MatrixXd H_;

	// measurement covariance matrix
	MatrixXd R_;

};

#endif  // KALMAN_FILTER_H_}