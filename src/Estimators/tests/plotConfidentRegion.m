x = [0:size(covariance,1) - 1];

figure('Renderer', 'painters', 'Position', [10 10 900 400])
subplot(1,2,1)
index = 1;

ground_truth = 43.2;

xconf = [x x(end:-1:1)] ; 
y = estimation(:,index);
y_cov = sqrt(covariance(:,index));
yconf = [y + y_cov * 3;  y(end:-1:1)-y_cov(end:-1:1) * 3];


p = fill(xconf,yconf,'red');
p.FaceColor = [1 0.8 0.8];      
p.EdgeColor = 'none';           

hold on
plot(x,y)
plot(x, ones(length(x),1) * ground_truth);
hold off

title(['Parameter ', num2str(index)])
xlabel('Samples #')
legend('Confident Region', 'Expected Value', 'Ground Truth')


subplot(1,2,2)

index = 2;

ground_truth = 12.2;

xconf = [x x(end:-1:1)] ; 
y = estimation(:,index);
y_cov = covariance(:,index);
yconf = [y + y_cov * 3;  y(end:-1:1)-y_cov(end:-1:1) * 3];


p = fill(xconf,yconf,'red');
p.FaceColor = [1 0.8 0.8];      
p.EdgeColor = 'none';           

hold on
plot(x,y)
plot(x, ones(length(x),1) * ground_truth);
hold off

title(['Parameter ', num2str(index)])
xlabel('Samples #')
legend('Confident Region', 'Expected Value', 'Ground Truth')
