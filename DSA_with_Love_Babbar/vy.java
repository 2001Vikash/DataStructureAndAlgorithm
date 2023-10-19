class vy{
    public static void main(String[] args) {
        int n = 2; // so we have to handle 1.
        if(n == 1){
            System.err.println("Not prime");
            return;
        }

        for(int i = 2; i*i <= n; i++){
            if(n % i == 0){
                System.out.println("Not Prime");
                return;
            }
        }
        
        System.err.println("Prime");
    }
}